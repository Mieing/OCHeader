@class NSString;

@interface _LVFontItem : NSObject

@property (copy, nonatomic) NSString *fontID;
@property (copy, nonatomic) NSString *resourceID;
@property (copy, nonatomic) NSString *fontName;
@property (nonatomic) double migrationScale;

+ (id)itemWithID:(id)a0 resourceID:(id)a1 name:(id)a2 scale:(double)a3;

- (void).cxx_destruct;
- (id)init;

@end
