@class NSString, NSNumber, AWEURLModel;

@interface AWEAdCommentModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *avatarThumb;
@property (retain, nonatomic) NSString *source;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *buttonText;
@property (retain, nonatomic) NSString *commentName;
@property (retain, nonatomic) NSString *commentInfo;
@property (retain, nonatomic) NSNumber *commentTime;
@property (retain, nonatomic) NSNumber *showButtonNumber;
@property (copy, nonatomic) NSString *tagText;
@property (nonatomic) long long showType;
@property (retain, nonatomic) NSNumber *showCommentNumber;
@property (retain, nonatomic) NSNumber *useNativeIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)avatarThumbJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)shouldUseNativeIcon;
- (long long)showAdAreaCount;
- (void).cxx_destruct;

@end
