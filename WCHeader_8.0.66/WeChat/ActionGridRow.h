@class NSString, NSArray;

@interface ActionGridRow : NSObject <NSCoding>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *rowItemList;

- (id)toXml;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
