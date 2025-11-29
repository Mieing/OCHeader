@class NSString, NSDictionary;

@interface IESECWindowRequest : NSObject

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSString *entranceLocation;
@property (copy, nonatomic) NSString *fromAwemeId;
@property (copy, nonatomic) NSDictionary *extraData;
@property (copy, nonatomic) NSDictionary *taskBannerRequest;
@property (copy, nonatomic) id /* block */ halfViewWillOpen;
@property (copy, nonatomic) id /* block */ halfViewWillClose;
@property (copy, nonatomic) id /* block */ halfViewCloseHandler;

- (void).cxx_destruct;

@end
