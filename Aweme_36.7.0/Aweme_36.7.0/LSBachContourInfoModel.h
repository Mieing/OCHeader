@class NSString, NSArray;

@interface LSBachContourInfoModel : NSObject

@property (nonatomic) long long version;
@property (copy, nonatomic) NSString *interactID;
@property (nonatomic) long long scene;
@property (nonatomic) struct CGSize { double width; double height; } cameraSize;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) struct contour_info_st { unsigned char x0; unsigned short x1; unsigned short x2; struct con_string_ { unsigned short x0; unsigned char x1[0]; } x3; struct contour_extra_ { unsigned char x0; unsigned short x1; unsigned char x2[0]; } x4; unsigned char x5; struct contour_item_ { unsigned short x0; struct point_ { unsigned short x0; unsigned short x1; } x1[0]; } x6[0]; } *originContourInfoData;

- (void).cxx_destruct;
- (id)init;

@end
