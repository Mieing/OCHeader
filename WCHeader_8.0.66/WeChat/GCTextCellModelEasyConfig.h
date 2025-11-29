@class NSString, GCTextCellLayoutInfo;

@interface GCTextCellModelEasyConfig : NSObject

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) GCTextCellLayoutInfo *layoutInfo;
@property (nonatomic) BOOL showHead;

- (void).cxx_destruct;

@end
