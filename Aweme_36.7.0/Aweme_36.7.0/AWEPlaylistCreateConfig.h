@class NSString;

@interface AWEPlaylistCreateConfig : NSObject

@property (nonatomic) BOOL enablePrivateCreate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *completionButtonTitle;
@property (nonatomic) BOOL isMiniLuna;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ errorBlock;

- (void).cxx_destruct;

@end
