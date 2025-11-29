@class NSString, NSData, WCFinderDataItem, WCFinderJumpInfo;

@interface MMFinderLiveSelectiveGoParams : NSObject

@property (nonatomic) unsigned int goFlag;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) WCFinderDataItem *finderDataItem;
@property (nonatomic) unsigned long long functionType;
@property (retain, nonatomic) WCFinderJumpInfo *jumpInfo;
@property (retain, nonatomic) NSData *paramsBuffer;
@property (nonatomic) unsigned int reportScenario;

+ (id)paramsWithSelectGoResponse:(id)a0;

- (void).cxx_destruct;

@end
