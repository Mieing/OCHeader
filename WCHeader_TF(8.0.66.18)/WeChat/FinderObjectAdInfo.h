@class ObjectAdContentMiniApp, ObjectAdDesc, ObjectAdContentH5, ObjectAdContentLeadLink, NSMutableArray;

@interface FinderObjectAdInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int adType;
@property (retain, nonatomic) ObjectAdDesc *adDesc;
@property (retain, nonatomic) ObjectAdContentH5 *adH5;
@property (retain, nonatomic) ObjectAdContentMiniApp *adMiniApp;
@property (retain, nonatomic) ObjectAdContentLeadLink *adLeadLink;
@property (retain, nonatomic) NSMutableArray *adItems;

+ (void)initialize;

@end
