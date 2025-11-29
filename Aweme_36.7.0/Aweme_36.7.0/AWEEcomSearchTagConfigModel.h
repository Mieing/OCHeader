@class AWESearchTagText, NSString, AWESearchTagIcon;

@interface AWEEcomSearchTagConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long tagType;
@property (retain, nonatomic) AWESearchTagIcon *tagIcon;
@property (retain, nonatomic) AWESearchTagText *tagText;
@property (nonatomic) double hybridHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
