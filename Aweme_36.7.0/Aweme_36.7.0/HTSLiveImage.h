@class NSString, NSMutableArray, HTSLiveImage_Content;

@interface HTSLiveImage : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *URLListArray;
@property (readonly, nonatomic) unsigned long long URLListArray_Count;
@property (copy, nonatomic) NSString *uri;
@property (nonatomic) long long height;
@property (nonatomic) long long width;
@property (copy, nonatomic) NSString *avgColor;
@property (nonatomic) int imageType;
@property (copy, nonatomic) NSString *openWebURL;
@property (retain, nonatomic) HTSLiveImage_Content *content;
@property (nonatomic) BOOL hasContent;
@property (nonatomic) BOOL isAnimated;
@property (retain, nonatomic) NSMutableArray *flexSettingListArray;
@property (readonly, nonatomic) unsigned long long flexSettingListArray_Count;
@property (retain, nonatomic) NSMutableArray *textSettingListArray;
@property (readonly, nonatomic) unsigned long long textSettingListArray_Count;

+ (id)imageWithImageURL:(id)a0;
+ (id)descriptor;

- (id)avgColor;
- (long long)width;
- (long long)height;
- (int)imageType;
- (unsigned long long)URLListArray_Count;
- (id)uri;
- (void)setHeight:(long long)a0;
- (void)setImageType:(int)a0;
- (id)content;
- (void)setWidth:(long long)a0;
- (void)setAvgColor:(id)a0;
- (void)setUri:(id)a0;
- (id)URLListArray;

@end
