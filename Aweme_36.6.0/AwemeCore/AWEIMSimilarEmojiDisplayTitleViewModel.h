@class NSString, NSAttributedString;

@interface AWEIMSimilarEmojiDisplayTitleViewModel : NSObject <AWEIMSimilarEmojiDisplayTitleViewModelProtocol>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (nonatomic) unsigned long long actionType;
@property (copy, nonatomic) id /* block */ didShowBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
