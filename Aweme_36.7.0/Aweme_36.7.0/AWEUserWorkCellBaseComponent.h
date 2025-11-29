@class AWEUserWorkCellContext, NSString, AWEAwemeModel;

@interface AWEUserWorkCellBaseComponent : AWERLComponent2 <AWERLComponentUIOverride>

@property (retain, nonatomic) AWEAwemeModel *data;
@property (retain, nonatomic) AWEUserWorkCellContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
