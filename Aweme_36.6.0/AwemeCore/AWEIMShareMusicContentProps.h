@class NSString, AWEURLModel;

@interface AWEIMShareMusicContentProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ tapAction;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) AWEURLModel *musicCoverURL;

- (void).cxx_destruct;

@end
