@class NSString, NSMutableArray;

@interface WCViewOperationConfigModel : MMObject <PBCoding>

@property (retain, nonatomic) NSString *pageName;
@property (retain, nonatomic) NSString *viewId;
@property (nonatomic) unsigned long long action;
@property (retain, nonatomic) NSMutableArray *businessParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_pageName;
+ (void)PBArrayAdd_viewId;
+ (void)PBArrayAdd_action;
+ (void)PBArrayAdd_businessParams;
+ (void)initialize;

@end
