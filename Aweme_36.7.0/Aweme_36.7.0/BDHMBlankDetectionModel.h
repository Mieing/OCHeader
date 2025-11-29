@interface BDHMBlankDetectionModel : NSObject

@property (nonatomic) long long enterPageTs;
@property (nonatomic) long long detectStartTs;
@property (readonly, nonatomic) unsigned long long pageStayDuration;
@property (nonatomic) long long detectionType;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;

@end
