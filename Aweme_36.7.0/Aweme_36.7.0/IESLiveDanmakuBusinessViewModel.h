@class NSArray, NSString, NSAttributedString;

@interface IESLiveDanmakuBusinessViewModel : NSObject

@property (copy, nonatomic) NSArray *logoImageURLS;
@property (copy, nonatomic) NSArray *tailImageURLS;
@property (copy, nonatomic) NSArray *jumpImageURLS;
@property (copy, nonatomic) NSString *jumpSchema;
@property (copy, nonatomic) NSString *businessId;
@property (copy, nonatomic) NSString *resourceId;
@property (copy, nonatomic) NSAttributedString *content;
@property (copy, nonatomic) NSArray *backgroundColors;
@property (copy, nonatomic) NSArray *borderColors;
@property (nonatomic) BOOL isBusinessStrong;
@property (nonatomic) unsigned long long fontSizeType;
@property (nonatomic) double danmakuHeight;

- (void).cxx_destruct;

@end
