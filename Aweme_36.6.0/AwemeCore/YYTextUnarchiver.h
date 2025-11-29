@class NSString;

@interface YYTextUnarchiver : NSKeyedUnarchiver <NSKeyedUnarchiverDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)unarchiveObjectWithData:(id)a0;
+ (id)unarchiveObjectWithFile:(id)a0;

- (id)init;
- (id)unarchiver:(id)a0 didDecodeObject:(id)a1;
- (id)initForReadingWithData:(id)a0;

@end
