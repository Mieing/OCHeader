@class NSString, NSNumber, NSArray;

@interface MMLiveViewLayoutConfig : NSObject

@property (retain, nonatomic) NSString *viewId;
@property (retain, nonatomic) NSString *parentViewId;
@property (nonatomic) BOOL visiableInPortait;
@property (nonatomic) BOOL visiableInLandscape;
@property (nonatomic) BOOL supportClearContents;
@property (nonatomic) unsigned int visibleBit;
@property (retain, nonatomic) NSNumber *top;
@property (retain, nonatomic) NSNumber *left;
@property (retain, nonatomic) NSNumber *right;
@property (retain, nonatomic) NSNumber *bottom;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *centerX;
@property (retain, nonatomic) NSNumber *centerY;
@property (retain, nonatomic) NSString *relativeViewId;
@property (retain, nonatomic) NSArray *relativeConstraints;

+ (id)configListFromXLabConfigString:(id)a0;

- (id)initWithXLabConfig:(id)a0;
- (id)init;
- (void)updateWithXLabConfig:(id)a0;
- (void)updateWithConfigDictionary:(id)a0;
- (void).cxx_destruct;

@end
