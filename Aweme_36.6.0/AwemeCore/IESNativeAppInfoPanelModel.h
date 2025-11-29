@class NSString, NSMutableArray;

@interface IESNativeAppInfoPanelModel : NSObject

@property (nonatomic) double imageHeight;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) NSMutableArray *abilities;

- (void).cxx_destruct;
- (id)init;

@end
