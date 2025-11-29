@class NSArray, NSDictionary, NSString, AWEVideoPublishViewModel;

@interface ChooseAlbumMediaConfig : NSObject

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (copy, nonatomic) NSDictionary *extraDictionary;
@property (nonatomic) long long maxImageSelectCount;
@property (nonatomic) long long minImageSelectCount;
@property (nonatomic) BOOL useOldStyle;
@property (retain, nonatomic) NSArray *defaultSelectedAssets;
@property (copy, nonatomic) NSString *defaultTabIdentifier;
@property (copy, nonatomic) id /* block */ imageCompletionBlock;
@property (copy, nonatomic) id /* block */ videoCompletionBlock;
@property (copy, nonatomic) id /* block */ beforePreviewBlock;
@property (copy, nonatomic) id /* block */ requestedAuthorizationActionBlock;
@property (copy, nonatomic) id /* block */ enterBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ beforeAlbumDismissCompletionBlock;
@property (copy, nonatomic) id /* block */ shouldSelectedBlock;
@property (copy, nonatomic) NSString *customBottomViewTitle;

- (void).cxx_destruct;

@end
