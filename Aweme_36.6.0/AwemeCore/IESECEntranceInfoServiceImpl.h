@class NSString, NSArray, IESECEntranceInfoCheckerModel, NSMutableArray;

@interface IESECEntranceInfoServiceImpl : NSObject <IESECEntranceInfoService> {
    NSArray *_whiteList;
    IESECEntranceInfoCheckerModel *_sdkData;
    NSMutableArray *_modifyReportList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)composeFactory:(id)a0;
+ (id)entranceInfoWhiteList;
+ (id)composeEntranceInfo:(id)a0 scene:(id)a1;
+ (id)composeEntranceInfo:(id)a0 scene:(id)a1 originalDict:(id)a2;
+ (void)reportModifyResult:(id)a0;
+ (id)entranceSDKModel;
+ (id)shared;

- (void).cxx_destruct;

@end
