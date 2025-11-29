@class NSString, MMUIViewController;

@interface OpenIMContactInfoForThirdReqFetchContext : NSObject

@property (copy, nonatomic) id /* block */ completeBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) NSString *dataUrl;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) MMUIViewController *viewController;
@property (retain, nonatomic) NSString *multiUserQRCode;

- (void).cxx_destruct;

@end
