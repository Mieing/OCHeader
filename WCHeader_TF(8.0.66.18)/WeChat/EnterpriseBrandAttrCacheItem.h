@class EnterpriseBrandAttr;

@interface EnterpriseBrandAttrCacheItem : MMObject

@property (retain, nonatomic) EnterpriseBrandAttr *attr;
@property (nonatomic) unsigned int updateTime;

- (void).cxx_destruct;

@end
