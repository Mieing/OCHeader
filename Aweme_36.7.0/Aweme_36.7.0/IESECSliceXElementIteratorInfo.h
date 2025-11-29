@class NSArray, NSString;

@interface IESECSliceXElementIteratorInfo : NSObject

@property (nonatomic) unsigned long long startIndex;
@property (nonatomic) unsigned long long endIndex;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSString *itemName;
@property (retain, nonatomic) NSString *indexName;

- (id)getItemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;

@end
