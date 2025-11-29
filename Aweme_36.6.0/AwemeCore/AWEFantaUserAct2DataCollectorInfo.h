@class NSString, NSDictionary, AWEAwemeModel;

@interface AWEFantaUserAct2DataCollectorInfo : NSObject <FantaDataCollectorInfo>

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (nonatomic) unsigned long long userAction2Mask;
@property (retain, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
