@class NSString;

@interface AWEIMProfilePersonalTagModel : NSObject <BDModelCustom>

@property (nonatomic) unsigned long long tagType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *darkImageUrl;
@property (copy, nonatomic) NSString *lightImageUrl;
@property (copy, nonatomic) NSString *trackerLinkType;
@property (copy, nonatomic) NSString *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
