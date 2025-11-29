@class NSString;

@interface ACCTextStickerUpdateLoadingConfig : NSObject

@property (retain, nonatomic) NSString *loadingText;
@property (nonatomic) long long loadingScene;
@property (nonatomic) BOOL needCancelBtn;
@property (copy, nonatomic) id /* block */ cancelBlock;

- (void).cxx_destruct;

@end
