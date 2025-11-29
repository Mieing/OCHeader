@class NSString, NSMutableArray;

@interface ActionList : NSObject <NSCoding>

@property (nonatomic) int type;
@property (nonatomic) int showType;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *actions;
@property (nonatomic) double iconWidth;
@property (nonatomic) double iconHeight;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)toXml;
- (void).cxx_destruct;

@end
