@class NSString, NSDictionary, UIImage;

@interface AWEDetailCMCEventModel : AWEDetailCommonDiffableModel <AWEDetailLinkModel>

@property (copy, nonatomic) NSString *webTitle;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *openURL;
@property (copy, nonatomic) NSString *CMCEventName;
@property (copy, nonatomic) NSDictionary *CMCEventInfo;
@property (nonatomic) double topInset;
@property (nonatomic) double bottomInset;
@property (readonly, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *displayText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
