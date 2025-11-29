@class NSString, NSIndexPath;

@interface ACCRecordPropInheritInfo : NSObject

@property (copy, nonatomic) NSString *propRecId;
@property (retain, nonatomic) NSIndexPath *propIndexPath;
@property (copy, nonatomic) NSString *propSelectedFrom;
@property (copy, nonatomic) NSString *propTabType;

- (void).cxx_destruct;

@end
