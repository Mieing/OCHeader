@interface GXStyleModel : NSObject

@property (nonatomic) long long display;
@property (nonatomic) long long flexWrap;
@property (nonatomic) long long overflow;
@property (nonatomic) long long alignSelf;
@property (nonatomic) long long alignItems;
@property (nonatomic) struct { struct { int dimen_type; float dimen_value; } left; struct { int dimen_type; float dimen_value; } right; struct { int dimen_type; float dimen_value; } top; struct { int dimen_type; float dimen_value; } bottom; } border;
@property (nonatomic) long long alignContent;
@property (nonatomic) long long positionType;
@property (nonatomic) long long flexDirection;
@property (nonatomic) long long justifyContent;
@property (nonatomic) long long direction;
@property (nonatomic) struct { struct { int dimen_type; float dimen_value; } left; struct { int dimen_type; float dimen_value; } right; struct { int dimen_type; float dimen_value; } top; struct { int dimen_type; float dimen_value; } bottom; } position;
@property (nonatomic) struct { struct { int dimen_type; float dimen_value; } left; struct { int dimen_type; float dimen_value; } right; struct { int dimen_type; float dimen_value; } top; struct { int dimen_type; float dimen_value; } bottom; } margin;
@property (nonatomic) struct { struct { int dimen_type; float dimen_value; } left; struct { int dimen_type; float dimen_value; } right; struct { int dimen_type; float dimen_value; } top; struct { int dimen_type; float dimen_value; } bottom; } padding;
@property (nonatomic) struct { struct { int dimen_type; float dimen_value; } width; struct { int dimen_type; float dimen_value; } height; } size;
@property (nonatomic) struct { struct { int dimen_type; float dimen_value; } width; struct { int dimen_type; float dimen_value; } height; } minSize;
@property (nonatomic) struct { struct { int dimen_type; float dimen_value; } width; struct { int dimen_type; float dimen_value; } height; } maxSize;
@property (nonatomic) struct { struct { int dimen_type; float dimen_value; } width; struct { int dimen_type; float dimen_value; } height; } defaultSize;
@property (nonatomic) double flexGrow;
@property (nonatomic) double flexShrink;
@property (nonatomic) struct { int dimen_type; float dimen_value; } flexBasis;
@property (nonatomic) double aspectRatio;
@property (nonatomic) BOOL fitContent;
@property (nonatomic) double recordFlexGrow;
@property (nonatomic) struct { struct { int dimen_type; float dimen_value; } width; struct { int dimen_type; float dimen_value; } height; } recordSize;
@property (nonatomic) struct { struct { int dimen_type; float dimen_value; } width; struct { int dimen_type; float dimen_value; } height; } recordMinSize;

+ (id)defaultStyleModel;

@end
