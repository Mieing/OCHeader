@class NSString;

@interface WCSpecialConfigModel : NSObject

@property (retain, nonatomic) NSString *pageName;
@property (nonatomic) unsigned int logID;

- (id)initPageName:(id)a0 withLogID:(unsigned int)a1;
- (id)toString;
- (void).cxx_destruct;

@end
