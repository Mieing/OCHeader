@class MMCameraTemplateItem;

@interface MJShootTemplateItemReportModel : NSObject

@property (nonatomic) unsigned long long tabID;
@property (nonatomic) unsigned long long position;
@property (retain, nonatomic) MMCameraTemplateItem *templateItem;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
