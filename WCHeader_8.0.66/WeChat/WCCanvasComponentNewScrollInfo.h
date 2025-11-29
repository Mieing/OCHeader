@class WCCanvasComponentScrollGroupInfo, NSString;

@interface WCCanvasComponentNewScrollInfo : MMObject <NSCoding>

@property (retain, nonatomic) WCCanvasComponentScrollGroupInfo *componentGroupList;
@property (retain, nonatomic) NSString *bgColorTheme;
@property (nonatomic) double bgColorAlpha;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
