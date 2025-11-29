@class NSString, AWEURLModel;

@interface AWEIMShareStickerMessageProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) NSString *shootSmaeBtnStr;
@property (copy, nonatomic) NSString *convID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) AWEURLModel *url;
@property (copy, nonatomic) id /* block */ tapAction;
@property (copy, nonatomic) id /* block */ shootSameBtnTapAction;

- (void).cxx_destruct;

@end
