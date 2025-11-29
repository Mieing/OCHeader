@class NSString, ObjectAdContentMiniApp, ObjectAdDesc, ObjectAdContentH5, ObjectAdContentLeadLink;

@interface ObjectAdItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int adType;
@property (retain, nonatomic) ObjectAdDesc *adDesc;
@property (retain, nonatomic) ObjectAdContentH5 *adH5;
@property (retain, nonatomic) ObjectAdContentMiniApp *adMiniApp;
@property (retain, nonatomic) ObjectAdContentLeadLink *adLeadLink;
@property (retain, nonatomic) NSString *uxinfo;
@property (nonatomic) unsigned long long aid;

+ (void)initialize;

@end
