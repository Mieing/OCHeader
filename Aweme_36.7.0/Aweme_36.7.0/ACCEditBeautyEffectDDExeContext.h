@class ACCEditBeautyEffectDDDataIterator;
@protocol ACCEditBeautyEffectDDData;

@interface ACCEditBeautyEffectDDExeContext : NSObject

@property (copy, nonatomic) id /* block */ asyncProcessBlock;
@property (copy, nonatomic) id /* block */ actionsProvider;
@property (retain, nonatomic) ACCEditBeautyEffectDDDataIterator *dataIterator;
@property (copy, nonatomic) id /* block */ mutableDataCreator;
@property (nonatomic) BOOL iterated;
@property (readonly, nonatomic) id<ACCEditBeautyEffectDDData> data;
@property (readonly, nonatomic) id<ACCEditBeautyEffectDDData> mutableData;

- (id)initWith:(id)a0 actionsProvider:(id /* block */)a1 asyncProcess:(id /* block */)a2;
- (id)otherActions:(id)a0;
- (void)asyncProcess:(id /* block */)a0;
- (void).cxx_destruct;

@end
