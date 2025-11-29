@class NSString, NSArray, UIImage, AWEURLModel;

@interface AFDFastReplyViewConfiguration : NSObject

@property (nonatomic) double maxWidth;
@property (retain, nonatomic) AWEURLModel *avatarURL;
@property (retain, nonatomic) UIImage *staticAvatar;
@property (copy, nonatomic) NSString *placeholder;
@property (retain, nonatomic) NSArray *emojis;

- (void).cxx_destruct;

@end
