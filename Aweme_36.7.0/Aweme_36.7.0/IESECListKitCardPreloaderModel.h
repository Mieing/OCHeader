@class NSString;

@interface IESECListKitCardPreloaderModel : NSObject

@property (nonatomic) unsigned long long count;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (nonatomic) unsigned long long engineType;
@property (nonatomic) unsigned long long itemType;
@property (copy, nonatomic) NSString *schema;

- (void).cxx_destruct;

@end
