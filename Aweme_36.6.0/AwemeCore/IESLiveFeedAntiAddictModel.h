@class NSString, NSArray, UIImage;

@interface IESLiveFeedAntiAddictModel : NSObject <AWEFeedAntiAddictMaskModelProtocol, NSCopying>

@property (nonatomic) long long antiAddictType;
@property (nonatomic) long long antiAddictMaskType;
@property (nonatomic) double antiAddictCountDownTime;
@property (nonatomic) double antiAddictBlockToTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long antiAddictType;
@property (nonatomic) long long antiAddictMaskType;
@property (nonatomic) double antiAddictCountDownTime;
@property (nonatomic) double antiAddictBlockToTime;
@property (nonatomic) long long antiAddictAnimationCircleStartTime;
@property (retain, nonatomic) NSArray *URLList;
@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) NSArray *coverImageURLList;

- (id)initWithAWEModel:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
