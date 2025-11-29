@protocol CKDDData, CKDDDataChangeRecorder;

@interface CKDDDataIterator : NSObject

@property (retain, nonatomic) id<CKDDData> initialData;
@property (retain, nonatomic) id<CKDDDataChangeRecorder> recorder;
@property (retain, nonatomic) id<CKDDData> data;

- (id)initWith:(id)a0 recorder:(id)a1;
- (void).cxx_destruct;
- (void)next:(id /* block */)a0;

@end
