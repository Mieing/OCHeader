@class NSArray, NSString, AWEIMCardMessageCommerceAnchorInfo;

@interface AWEIMCardMessageAnchorInfo : NSObject

@property (copy, nonatomic) NSArray *anchorIDs;
@property (copy, nonatomic) NSString *customID;
@property (copy, nonatomic) NSString *musicID;
@property (nonatomic) long long anchorType;
@property (copy, nonatomic) NSArray *icons;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleTag;
@property (copy, nonatomic) NSString *effectSocialData;
@property (nonatomic) BOOL isImageTemplateSticker;
@property (copy, nonatomic) NSString *templateID;
@property (nonatomic) long long templateType;
@property (nonatomic) long long POIIconType;
@property (retain, nonatomic) AWEIMCardMessageCommerceAnchorInfo *commerceAnchorInfo;

- (id)initWithContentDict:(id)a0;
- (id)getContentDict;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
