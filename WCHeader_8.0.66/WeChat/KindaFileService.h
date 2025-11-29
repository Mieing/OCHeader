@class NSString;

@interface KindaFileService : NSObject <MMKFileService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getData:(id)a0;

@end
