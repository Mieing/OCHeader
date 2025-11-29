@class HTSLiveRoomBottomMessage, NSString, UIImageView, UIView, UILabel;
@protocol HTSLivePushMessageViewDelegate;

@interface HTSLivePushMessageView : UIView {
    UIView *_background;
    UILabel *_contentLabel;
    UIImageView *_arrowImageView;
}

@property (retain, nonatomic) HTSLiveRoomBottomMessage *currentPushMessage;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) NSString *defaultActionImage;
@property (readonly, nonatomic) HTSLiveRoomBottomMessage *pushMessage;
@property (readonly, weak, nonatomic) id<HTSLivePushMessageViewDelegate> delegate;

- (id)p_dictionaryWithJsonString:(id)a0;
- (void)updatePushMessageWidth:(double)a0;
- (void)pr_click:(id)a0;
- (id)initWithPushMessage:(id)a0 delegate:(id)a1 width:(double)a2 diContext:(id)a3;
- (void).cxx_destruct;

@end
