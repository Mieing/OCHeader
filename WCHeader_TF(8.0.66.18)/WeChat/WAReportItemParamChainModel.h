@class WAReportBaseItem, NSString;

@interface WAReportItemParamChainModel : MMObject

@property (weak, nonatomic) WAReportBaseItem *item;
@property (readonly, nonatomic) WAReportItemParamChainModel *reset;
@property (readonly, nonatomic) NSString *toString;
@property (readonly, copy, nonatomic) id /* block */ appendString;
@property (readonly, copy, nonatomic) id /* block */ appendUInt32;
@property (readonly, copy, nonatomic) id /* block */ appendUInt64;
@property (readonly, copy, nonatomic) id /* block */ appendInt;
@property (readonly, copy, nonatomic) id /* block */ appendUInteger;

- (id)initWithItem:(id)a0;
- (void).cxx_destruct;

@end
