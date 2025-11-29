@class UIImage, NSArray, NSString;

@interface AWECommentAnchorModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) UIImage *anchorIcon;
@property (copy, nonatomic) NSArray *iconImageURLs;
@property (copy, nonatomic) NSArray *iconLightImageURLs;
@property (copy, nonatomic) NSArray *iconDarkImageURLs;
@property (copy, nonatomic) NSString *anchorDes;
@property (nonatomic) BOOL hasAnchorType;
@property (copy, nonatomic) NSString *anchorType;
@property (copy, nonatomic) id /* block */ tapAnchorBlock;
@property (nonatomic) unsigned long long businessType;
@property (nonatomic) BOOL isFromCommentAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
