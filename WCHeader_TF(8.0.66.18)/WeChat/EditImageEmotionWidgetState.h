@class NSString;

@interface EditImageEmotionWidgetState : EditImageWidgetState

@property (retain, nonatomic) NSString *emotionMd5;
@property (retain, nonatomic) NSString *emotionSearchKey;
@property (nonatomic) BOOL isEmotionAnimated;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
