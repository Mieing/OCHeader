@class NSString, UIImage;

@interface AWEIMSimilarEmojiDisplayButtonViewModel : NSObject <AWEIMSimilarEmojiDisplayButtonViewModelProtocol>

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long actionType;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *icon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
