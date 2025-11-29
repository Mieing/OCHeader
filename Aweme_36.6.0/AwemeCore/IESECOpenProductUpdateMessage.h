@class NSArray;

@interface IESECOpenProductUpdateMessage : IESECOpenMessage

@property (retain, nonatomic) NSArray *updatedProductIDs;

- (id)stringArrayFromPBIntArray:(id)a0;
- (void).cxx_destruct;
- (void)setRawMessage:(id)a0;

@end
