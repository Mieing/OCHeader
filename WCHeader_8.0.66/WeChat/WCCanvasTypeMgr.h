@class NSSet;

@interface WCCanvasTypeMgr : NSObject

@property (retain, nonatomic) NSSet *validTypeSet;

- (id)init;
- (void)initValidTypeSet;
- (BOOL)isCanvasTypesAllValid:(id)a0;
- (BOOL)isComponentTypeValid:(id)a0;
- (BOOL)checkComponentListValid:(id)a0;
- (BOOL)isScrollGroupComponentAllTypesValid:(id)a0;
- (BOOL)hasCanvasTypeValid:(id)a0;
- (void).cxx_destruct;

@end
