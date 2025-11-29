@class NSString, NSAttributedString;

@interface IESLiveCloseAlertItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *attributedContentText;
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) NSString *cancelTitle;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ isCancelFetchBlock;
@property (copy, nonatomic) id /* block */ didDisplayBlock;

- (void).cxx_destruct;

@end
