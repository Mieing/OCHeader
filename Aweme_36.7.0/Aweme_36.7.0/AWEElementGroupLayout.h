@class NSArray, AWEElementGroupLayoutConfig;

@interface AWEElementGroupLayout : NSObject

@property (retain, nonatomic) AWEElementGroupLayoutConfig *layoutConfig;
@property (retain, nonatomic) NSArray *elementIDs;

+ (id)groupLayout:(id)a0 elementIDs:(id)a1;
+ (id)normalGroupLayoutWithElementIDs:(id)a0;
+ (id)horizontalGroupLayoutWithElementIDs:(id)a0 scrollEnable:(BOOL)a1;

- (void).cxx_destruct;

@end
