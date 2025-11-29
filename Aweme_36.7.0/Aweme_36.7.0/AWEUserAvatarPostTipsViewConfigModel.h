@class NSString;

@interface AWEUserAvatarPostTipsViewConfigModel : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ didTapActionBlock;

- (void).cxx_destruct;

@end
