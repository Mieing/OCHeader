@class NSString, NSDictionary, IESLiveLinkLiveCorePushBase, IESLiveLinkLiveCoreInteractInfo;

@interface IESLiveLinkLiveCoreExtInfo : NSObject

@property (copy, nonatomic) NSDictionary *rawData;
@property (retain, nonatomic) IESLiveLinkLiveCorePushBase *pushBase;
@property (retain, nonatomic) IESLiveLinkLiveCoreInteractInfo *interact;
@property (copy, nonatomic) NSString *qId;

- (void).cxx_destruct;

@end
