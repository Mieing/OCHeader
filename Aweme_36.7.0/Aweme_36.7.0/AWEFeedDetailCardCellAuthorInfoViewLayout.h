@class UIFont;

@interface AWEFeedDetailCardCellAuthorInfoViewLayout : NSObject

@property (nonatomic) long long configType;
@property (nonatomic) double leftOffset;
@property (nonatomic) double rightOffset;
@property (nonatomic) double buttonWidth;
@property (nonatomic) struct CGSize { double width; double height; } avatarImageViewSize;
@property (retain, nonatomic) UIFont *nickNameFont;
@property (retain, nonatomic) UIFont *timeLabelFont;

+ (id)authorInfoLayoutForStablePage;
+ (id)authorInfoLayoutForRVCard;
+ (id)authorInfoLayoutWithType:(long long)a0;

- (void).cxx_destruct;

@end
