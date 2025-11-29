@class NSString, NSDictionary, AWEAwemeModel;

@interface AWESearchCardDiggModel : NSObject

@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL userDigged;
@property (nonatomic) long long diggCount;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *adEventName;
@property (copy, nonatomic) NSDictionary *interactLogExtra;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } diggButtonFrame;

- (void).cxx_destruct;
- (id)init;

@end
