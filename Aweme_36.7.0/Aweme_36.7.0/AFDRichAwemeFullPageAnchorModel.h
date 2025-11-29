@class NSArray, NSString, UIImage, NSDictionary;

@interface AFDRichAwemeFullPageAnchorModel : NSObject <AFDRichAwemeFullPageAnchorModelProtocol>

@property (retain, nonatomic) UIImage *anchorIcon;
@property (copy, nonatomic) NSArray *iconImageURLs;
@property (copy, nonatomic) NSString *anchorDes;
@property (nonatomic) BOOL hasAnchorType;
@property (copy, nonatomic) NSString *anchorType;
@property (copy, nonatomic) id /* block */ tapAnchorBlock;
@property (retain, nonatomic) NSDictionary *clickExtraDict;
@property (nonatomic) unsigned long long businessType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
