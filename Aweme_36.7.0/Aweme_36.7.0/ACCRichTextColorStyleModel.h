@class NSString, NSArray;

@interface ACCRichTextColorStyleModel : NSObject <NSCopying>

@property (nonatomic) long long toolBarStyle;
@property (retain, nonatomic) NSString *textColor;
@property (retain, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) NSString *bgColorName;
@property (retain, nonatomic) NSString *effectBgIdentifier;
@property (retain, nonatomic) NSString *effectBgFilePath;
@property (nonatomic) BOOL isNeedHideImg;
@property (copy, nonatomic) NSArray *needHideScene;
@property (copy, nonatomic) NSString *borderColor;

- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
