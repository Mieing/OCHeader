@class NSString;

@interface IESECMoreLiveEcommerceUtil : NSObject <IESECMoreLiveEcommerceContainerProtocol>

@property (nonatomic) BOOL dislikeLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)getVcWithDic:(id)a0;

@end
